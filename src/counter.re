/* This is a stateful component. In ReasonReact, we call them reducer components */
/* A list of state transitions, to be used in self.reduce and reducer */

type action =
  | Tick;

/* The component's state type. It can be anything, including, commonly, being a record type */
type state = {
  count: int,
  timerId: ref(option(Js.Global.intervalId)), 
  athlete: Business.athlete   
};

let toto:Business.athlete = {
  id:1,
  firstname:"toto",
  lastname:"rototo",
  shoes: [], 
  bikes:[], 
  clubs:[], 
  activities:[]
};
let component = ReasonReact.reducerComponent("Counter");

let make = (_children) => {
  ...component,
  initialState: () => {count: 0, timerId: ref(None), athlete:toto},
  reducer: (action, state) =>
    switch action {
    | Tick => ReasonReact.Update({...state, count: state.count + 1})
    },
  didMount: (self) => {
    /* this will call `reduce` every second */
    self.state.timerId := Some(Js.Global.setInterval(self.reduce((_) => Tick), 1000));
    ReasonReact.NoUpdate
  },
  willUnmount: ({state}) =>
    switch state.timerId^ {
    | Some(id) => Js.Global.clearInterval(id)
    | _ => ()
    },
  render: ({state: {count}}) => {
    let timesMessage = count == 1 ? "second" : "seconds";
    let greeting = {j|You've spent $count $timesMessage on this page!|j};
    <div> (ReasonReact.stringToElement(greeting)) </div>
  }
};
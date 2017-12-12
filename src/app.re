[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: (_self) =>
    <div>
      <header>
        <img src=logo className="App-logo" alt="logo" />
        <h2> (ReasonReact.stringToElement(message)) </h2>
      </header>
      <div className="wrapper">
        <article> (ReasonReact.stringToElement(message)) </article>
        <nav> (ReasonReact.stringToElement("navigation")) </nav>
        <aside> (ReasonReact.stringToElement("aside")) </aside>
      </div>
      <footer> (ReasonReact.stringToElement("footer")) </footer>
    </div>
};
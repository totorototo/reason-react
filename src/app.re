[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: (_self) =>
    <div>
      <header className="component">
        <img src=logo className="App-logo" alt="logo" />
        (ReasonReact.stringToElement(message))
      </header>
      <div className="wrapper">
        <article className="component"> (ReasonReact.stringToElement("article")) </article>
        <nav> (ReasonReact.stringToElement("navigation")) </nav>
        <aside> (ReasonReact.stringToElement("aside")) </aside>
      </div>
      <footer> (ReasonReact.stringToElement("footer")) </footer>
    </div>
};
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
        <nav className="component"> (ReasonReact.stringToElement("navigation")) </nav>
        <aside className="component"> (ReasonReact.stringToElement("aside")) </aside>
      </div>
      <footer className="component"> (ReasonReact.stringToElement("footer")) </footer>
    </div>
};
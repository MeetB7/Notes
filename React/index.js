ReactDOM.render(<ul>
    <li>Red</li>
    <li>Blue</li>
</ul>, document.getElementById("root")) // document.querySelector("#root")


// Doing something like this in Pure java will be hard ~
// const h1 = document.createElement("h1")
// h1.textContent = "This is an imperative way to program."
// h1.className = "Header"
// document.getElementById("root").append(h1)


function Meet(){
    return(
        <h1>Hello!</h1>
    );
}
// React component names should start with an uppercase letter by convention

ReactDOM.render(<Meet />, document.getElementById("root"));
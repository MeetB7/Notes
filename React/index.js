ReactDOM.render(<ul>
    <li>Red</li>
    <li>Blue</li>
</ul>, document.getElementById("root")) // document.querySelector("#root")

function Meet(){
    return(
        <h1>Hello!</h1>
    );
}
// React component names should start with an uppercase letter by convention

ReactDOM.render(<Meet />, document.getElementById("root"));
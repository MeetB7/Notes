import Header from Header
function Swords() {
    return(
        <ol>
            <li>Enma</li>
            <li>Wado</li>
            <li>Kitetsu</li>
        </ol>
    )
}
function Footer () {
    return (
        <footer>
            <small> © 2023 Meet Development. <br></br>All rights Reserved.</small>
        </footer>
    )
}

function Page() {
    return (
    <div>
        <Header/>
        
        <img src="../../HTML/img/zoro.jpg" width="800px"></img>
        <ul>
            <li>Wants to become Best Swordsman</li>
            <li>Uses 3 swords</li>
        </ul>
        <Swords/>
        <Footer/>
    </div>
    )
}


ReactDOM.render(<Page/>, document.getElementById("root"));

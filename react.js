function Banner()
{
    let title = "La maison jungle";
    return (<h1>{title}</h1>)
}

function Cart()
{
    let monstera_prix = 8;
    let lierre_prix = 10;
    let bouquet_prix = 15;
    return(
    <div>
        <h2>Pannier</h2>
        <ul>
            <li>Monstera : {monstera_prix} DH</li>
            <li>Lierre : {lierre_prix} DH</li>
            <li>Bouquet : {bouquet_prix} DH</li>
        </ul>
        Total : {monstera_prix + lierre_prix + bouquet_prix}
    </div>
    )
}
ReactDOM.render(<React.Fragment><Banner /><Cart /></React.Fragment>, document.getElementById("title"));
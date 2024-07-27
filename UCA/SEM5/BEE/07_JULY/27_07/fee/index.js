// function init() {
//     document.getElementById('jsworld').innerHTML = "Hello World From JS";
// }

var productlist = [//array of list
    { name: "DISH1", description: "tasty", price: "100" },
    { name: "steak", description: "very tasty", price: "200" }

]

function make_prod() {
    document.getElementById("product_menu").innerHTML = 
        `<table>
            <thead>
                <tr>
                    <th>Sr.No</th>
                    <th>Product Name</th>
                    <th>Details</th>
                    <th>Price</th>
                </tr>
            </thead>
            <tbody>
                ${get_productlisthtml_usingmap()}
                ${get_productlisthtml()}
            </tbody>
        </table>`
}

function get_productlisthtml() {//to put data in table
    var rows = "";
    for (let i = 0; i < productlist.length; i++) {
        rows = rows + `
                <tr>
                    <td>${i + 1}</td>
                    <td>${productlist[i].name}</td>
                    <td>${productlist[i].description}</td>
                    <td>${productlist[i].price}</td>
                </tr>
                `
    }
    return rows;
}


function get_productlisthtml_usingmap() {
    var rows = productlist.map((i, index) => {
        return `<tr>
            <td>${index + 1}</td>
            <td>${i.name}</td>
            <td>${i.description}</td>
            <td>${i.price}</td>
        </tr>`
    })
    return rows
}


// init();
make_prod();
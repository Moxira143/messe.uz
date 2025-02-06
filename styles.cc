/* Общие стили */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: Arial, sans-serif;
    line-height: 1.6;
    background-color: #f4f4f4;
    color: #333;
}

/* Стиль для меню */
.menu-btn {
    font-size: 30px;
    background-color: #333;
    color: white;
    border: none;
    padding: 10px;
    cursor: pointer;
    position: absolute;
    top: 20px;
    left: 20px;
}

.sidebar {
    position: fixed;
    top: 0;
    left: 0;
    width: 250px;
    height: 100%;
    background-color: #333;
    color: white;
    transform: translateX(-100%);
    transition: transform 0.3s ease-in-out;
    padding-top: 40px;
}

.sidebar.open {
    transform: translateX(0);
}

.sidebar ul {
    list-style: none;
    padding: 0;
}

.sidebar ul li {
    padding: 15px;
    text-align: center;
}

.sidebar ul li a {
    text-decoration: none;
    color: white;
    display: block;
}

.sidebar ul li a:hover {
    background-color: #444;
}

.close-btn {
    position: absolute;
    top: 20px;
    right: 20px;
    background-color: transparent;
    color: white;
    font-size: 30px;
    border: none;
    cursor: pointer;
}

/* Основной контент */
main {
    padding: 50px 20px;
    margin-left: 250px;
}

h1 {
    color: #333;
}

footer {
    background-color: #333;
    color: white;
    text-align: center;
    padding: 10px;
    position: absolute;
    width: 100%;
    bottom: 0;
}

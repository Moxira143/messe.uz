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

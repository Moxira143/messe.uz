/* Стили для простого горизонтального меню */
.navbar-nav {
    display: flex;
    justify-content: space-around;
    width: 100%;
    padding: 0;
    margin: 0;
}

.nav-item {
    list-style: none;
}

.nav-link {
    text-decoration: none;
    font-weight: bold;
    color: #007bff;
    padding: 10px 15px;
    display: block; /* Чтобы ссылки стали кликабельными */
}

.nav-link:hover {
    color: #0056b3;
    text-decoration: underline; /* Подчёркивание при наведении */
}

/* Дополнительные стили */
body {
    font-family: Arial, sans-serif;
}

section {
    padding: 20px;
    margin-top: 20px;
}

h2 {
    font-size: 1.5rem;
    margin-bottom: 15px;
}

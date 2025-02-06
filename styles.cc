body {
    font-family: Arial, sans-serif;
}

h1, h2, h3 {
    color: #333;
}

ul {
    list-style-type: none;
}

ul li {
    margin: 10px 0;
}

ul li a {
    text-decoration: none;
    color: #007bff;
}

ul li a:hover {
    text-decoration: underline;
}

section {
    padding: 20px 0;
}

#home {
    background-color: #f8f9fa;
    text-align: center;
    padding: 50px 0;
}

#about, #koelnmesse, #exhibitions, #contacts {
    background-color: #f1f1f1;
    border-radius: 8px;
    padding: 20px;
}

#contacts a {
    margin-right: 15px;
}
.social-icons {
    display: flex;
    gap: 10px; /* Отступы между иконками */
}

.social-icons img {
    width: 40px; /* Размер иконок */
    height: 40px;
    transition: transform 0.3s ease; /* Плавное увеличение */
}

.social-icons img:hover {
    transform: scale(1.2); /* Эффект увеличения при наведении */
}
.social-links {
    display: flex;
    gap: 15px;
    margin-top: 10px;
}

.social-links a img {
    width: 40px; /* Размер иконок */
    height: 40px;
    transition: transform 0.3s ease-in-out;
}

.social-links a img:hover {
    transform: scale(1.2); /* Увеличение при наведении */
}

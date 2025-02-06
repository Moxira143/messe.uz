// Ждем полной загрузки DOM перед добавлением обработчиков
document.addEventListener("DOMContentLoaded", function() {
    const menuBtn = document.querySelector('.menu-btn');
    const sidebar = document.getElementById('sidebar');
    
    if (menuBtn && sidebar) {
        // Обработчик для открытия/закрытия меню
        menuBtn.addEventListener('click', function() {
            sidebar.classList.toggle('open');
        });
    }
});

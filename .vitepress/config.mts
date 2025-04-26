import { defineConfig } from 'vitepress'


// https://vitepress.dev/reference/site-config
export default defineConfig({
  title: "Embedded Systems Code Quality Catalog ",
  description: "A complete embedded systems code catalog focus on education",
  base: "/code-quality-in-embedded-systems/",
  themeConfig: {

    nav: [
      { text: 'C', link: 'catalog/c' },
      { text: 'Bare-metal', link: 'catalog/baremetal' },
      { text: 'RTOS', link: 'catalog/rtos' }

    ],

    sidebar: [
      {
        text: 'Outline',
        items: [
          { text: 'Home', link: '/' },
        ]
      }
    ],

   // socialLinks: [
   //   { icon: 'github', link: 'https://github.com/vuejs/vitepress' }
   // ]
  }
})

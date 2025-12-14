# Asteroids Game  
**Agile Software Engineering Project**

## Course Information
- **Course:** Agile Software Engineering  
- **Instructor:** Dr. Reham Mohamed  
- **Teaching Assistants:**  
  - Janna Ibrahim  
  - Doaa Ameen  

## Students
| Name | ID |
|---|---|
| Ahmed Ragab | 192200247 |
| Amar Yasser | 192200277 |
| Mohamed Mohsen | 192200233 |
| Gamal Abdelnaser | 192200379 |

---

## Project Overview
- **Project Name:** Asteroids Game  
- **Language:** C++  
- **Framework:** SFML  
- **Methodology:** Agile / Scrum  

A classic **Asteroids** arcade-style game implemented using **SFML**.  
The project follows Agile principles with defined epics, user stories, sprints, and technical documentation.

---

## Product Backlog

### Epic 1: Core Game Infrastructure
**User Story 1.1:** Game initialization  
- SFML window 1200x800  
- Load textures and assets  
- Initialize random seed  
- 60 FPS limit  
**Acceptance:** Window opens with assets loaded  

**User Story 1.2:** Smooth animations  
- Animation class  
- Multi-frame support  
- Configurable speed  
**Acceptance:** Sprites animate smoothly  

---

### Epic 2: Player Controls & Movement
**User Story 2.1:** Spaceship controls  
- Arrow keys + space  
- Rotation physics  
- Thrust and damping  
**Acceptance:** Responsive ship movement  

**User Story 2.2:** Screen wrapping  
- Edge detection  
- Teleport to opposite side  
**Acceptance:** Seamless wrapping  

---

### Epic 3: Combat System
**User Story 3.1:** Shooting bullets  
- Bullet entity  
- Directional movement  
- Off-screen cleanup  
**Acceptance:** Bullets fire correctly  

**User Story 3.2:** Collision feedback  
- Circular collision detection  
- Explosion animations  
**Acceptance:** Explosions on impact  

---

### Epic 4: Asteroid Mechanics
**User Story 4.1:** Random asteroid movement  
- Random velocity  
- Screen wrapping  
- 15 initial asteroids  

**User Story 4.2:** Asteroid splitting  
- Large asteroids split into small ones  

**User Story 4.3:** Continuous spawning  
- Random spawn chance per frame  

---

### Epic 5: Player Death & Respawn
**User Story 5.1:** Player collision handling  
- Explosion animation  
- Respawn at center  
- Reset velocity  

---

## Sprint Planning

### Sprint 1: Foundation
**Goal:** Core infrastructure  
- Stories: 1.1, 1.2  
**Done When:**  
- Window renders  
- Sprites animate  
- No animation memory leaks  

### Sprint 2: Player Mechanics
**Goal:** Ship controls  
- Stories: 2.1, 2.2  
**Done When:**  
- Controls responsive  
- Screen wrapping works  

### Sprint 3: Combat System
**Goal:** Shooting and collisions  
- Stories: 3.1, 3.2, 4.1  
**Done When:**  
- Bullets destroy asteroids  
- Explosions display  

### Sprint 4: Advanced Features
**Goal:** Gameplay loop polish  
- Stories: 4.2, 4.3, 5.1  
**Done When:**  
- Asteroids split  
- Player respawns  
- Game loop stable  

---

## Technical Architecture

### Animation System
- Frame-based sprite animation  
- Configurable speed  
- End detection for explosions  

### Collision Detection
- Circular bounding boxes  
- Formula:  

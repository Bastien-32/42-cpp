CREATE TABLE IF NOT EXISTS users (
    id          INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    username    TEXT NOT NULL UNIQUE,
    displayName TEXT NOT NULL UNIQUE,
    email       TEXT NOT NULL UNIQUE,
    password    TEXT NOT NULL,
    avatar      BLOB DEFAULT NULL,
    secret2fa   TEXT DEFAULT NULL,
    hideProfile BOOLEAN NOT NULL DEFAULT 0,
    recover     TEXT DEFAULT NULL
);
CREATE TABLE IF NOT EXISTS games (
    id            INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    player1_id    INTEGER,
    player1_name  TEXT,
    player1_score INTEGER NOT NULL,
    player2_id    INTEGER,
    player2_name  TEXT,
    player2_score INTEGER NOT NULL,
    date          DATE NOT NULL DEFAULT CURRENT_DATE,
    
    FOREIGN KEY (player1_id) REFERENCES users (id) ON DELETE SET NULL,
    FOREIGN KEY (player2_id) REFERENCES users (id) ON DELETE SET NULL
);
CREATE TABLE IF NOT EXISTS friends (
    id       INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    userid   INTEGER NOT NULL,
    friendid INTEGER NOT NULL,
    UNIQUE (userid, friendid),
    FOREIGN KEY (userid) REFERENCES users (id) ON DELETE CASCADE,
    FOREIGN KEY (friendid) REFERENCES users (id) ON DELETE CASCADE
);
CREATE TABLE IF NOT EXISTS blocked (
    id        INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    userid    INTEGER NOT NULL,
    blockedid INTEGER NOT NULL,
    UNIQUE(userid, blockedid)
);

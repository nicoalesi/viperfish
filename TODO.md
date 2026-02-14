# TODO

- ~~Implement `find_pins()` to compute pinned pieces and per-piece pin masks.~~
- Implement en-passant legality check: verify king is not left in check.
- Change method to copy and restore board state (do not copy whole portions of MEM).
- Improve enpassant pins by moving the check from is_pins to the move generation func.

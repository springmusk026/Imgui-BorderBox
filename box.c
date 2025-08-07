if (espBox) {
    // Calculate top-left corner of the box
    int boxX = PositionHip.X - (boxWidth / 2);
    int boxY = screenHeight - PositionHead.Y;

    // Define box dimensions
    int boxW = boxWidth;
    int boxH = boxHeight;

    // Define the size of the corner lines (1/4th of width and height)
    int cornerW = boxW / 4;
    int cornerH = boxH / 4;

    ImColor color = ToColor(Box); // Convert the box color once for reuse

    // ──────── TOP CORNERS ────────

    // Top-left horizontal
    draw->AddLine(ImVec2(boxX, boxY), ImVec2(boxX + cornerW, boxY), color, 1.0f);
    // Top-right horizontal
    draw->AddLine(ImVec2(boxX + boxW - cornerW, boxY), ImVec2(boxX + boxW, boxY), color, 1.0f);

    // Top-left vertical
    draw->AddLine(ImVec2(boxX, boxY), ImVec2(boxX, boxY + cornerH), color, 1.0f);
    // Top-right vertical
    draw->AddLine(ImVec2(boxX + boxW - 1, boxY), ImVec2(boxX + boxW - 1, boxY + cornerH), color, 1.0f);

    // ──────── BOTTOM CORNERS ────────

    // Bottom-left horizontal
    draw->AddLine(ImVec2(boxX, boxY + boxH), ImVec2(boxX + cornerW, boxY + boxH), color, 1.0f);
    // Bottom-right horizontal
    draw->AddLine(ImVec2(boxX + boxW - cornerW, boxY + boxH), ImVec2(boxX + boxW, boxY + boxH), color, 1.0f);

    // Bottom-left vertical
    draw->AddLine(ImVec2(boxX, boxY + boxH - cornerH), ImVec2(boxX, boxY + boxH), color, 1.0f);
    // Bottom-right vertical
    draw->AddLine(ImVec2(boxX + boxW - 1, boxY + boxH - cornerH), ImVec2(boxX + boxW - 1, boxY + boxH), color, 1.0f);
}

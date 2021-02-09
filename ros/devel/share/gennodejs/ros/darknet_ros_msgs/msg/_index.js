
"use strict";

let BoundingBox = require('./BoundingBox.js');
let ObjectCount = require('./ObjectCount.js');
let BoundingBoxes = require('./BoundingBoxes.js');
let CheckForObjectsResult = require('./CheckForObjectsResult.js');
let CheckForObjectsAction = require('./CheckForObjectsAction.js');
let CheckForObjectsGoal = require('./CheckForObjectsGoal.js');
let CheckForObjectsFeedback = require('./CheckForObjectsFeedback.js');
let CheckForObjectsActionGoal = require('./CheckForObjectsActionGoal.js');
let CheckForObjectsActionFeedback = require('./CheckForObjectsActionFeedback.js');
let CheckForObjectsActionResult = require('./CheckForObjectsActionResult.js');

module.exports = {
  BoundingBox: BoundingBox,
  ObjectCount: ObjectCount,
  BoundingBoxes: BoundingBoxes,
  CheckForObjectsResult: CheckForObjectsResult,
  CheckForObjectsAction: CheckForObjectsAction,
  CheckForObjectsGoal: CheckForObjectsGoal,
  CheckForObjectsFeedback: CheckForObjectsFeedback,
  CheckForObjectsActionGoal: CheckForObjectsActionGoal,
  CheckForObjectsActionFeedback: CheckForObjectsActionFeedback,
  CheckForObjectsActionResult: CheckForObjectsActionResult,
};

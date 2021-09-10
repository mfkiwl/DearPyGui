#pragma once

#include "values/mvValueRegistry.h"
#include "values/mvIntValue.h"
#include "values/mvInt4Value.h"
#include "values/mvBoolValue.h"
#include "values/mvFloatValue.h"
#include "values/mvFloat4Value.h"
#include "values/mvStringValue.h"
#include "values/mvDoubleValue.h"
#include "values/mvDouble4Value.h"
#include "values/mvColorValue.h"
#include "values/mvFloatVectValue.h"
#include "values/mvSeriesValue.h"

#include "textures/mvStaticTexture.h"
#include "textures/mvDynamicTexture.h"
#include "textures/mvRawTexture.h"
#include "textures/mvTextureRegistry.h"

#include "handlers/mvHandlerRegistry.h"
#include "handlers/mvKeyDownHandler.h"
#include "handlers/mvKeyPressHandler.h"
#include "handlers/mvKeyReleaseHandler.h"
#include "handlers/mvMouseMoveHandler.h"
#include "handlers/mvMouseWheelHandler.h"
#include "handlers/mvMouseClickHandler.h"
#include "handlers/mvMouseDoubleClickHandler.h"
#include "handlers/mvMouseDownHandler.h"
#include "handlers/mvMouseReleaseHandler.h"
#include "handlers/mvMouseDragHandler.h"

#include "widget_handlers/mvItemHandlerRegistry.h"
#include "widget_handlers/mvHoverHandler.h"
#include "widget_handlers/mvResizeHandler.h"
#include "widget_handlers/mvFocusHandler.h"
#include "widget_handlers/mvActiveHandler.h"
#include "widget_handlers/mvVisibleHandler.h"
#include "widget_handlers/mvActivatedHandler.h"
#include "widget_handlers/mvDeactivatedHandler.h"
#include "widget_handlers/mvEditedHandler.h"
#include "widget_handlers/mvDeactivatedAfterEditHandler.h"
#include "widget_handlers/mvToggledOpenHandler.h"
#include "widget_handlers/mvClickedHandler.h"

#include "basic/mvInputText.h"
#include "basic/mvRadioButton.h"
#include "basic/mvListbox.h"
#include "basic/mvCheckbox.h"
#include "basic/mvButton.h"
#include "basic/mvSelectable.h"
#include "basic/mvCombo.h"
#include "basic/mvInputSingle.h"
#include "basic/mvInputMulti.h"
#include "basic/mvSliderMulti.h"
#include "basic/mvSliderSingle.h"
#include "basic/mvDragSingle.h"
#include "basic/mvDragMulti.h"
#include "basic/mvText.h"
#include "basic/mvTabButton.h"
#include "basic/mvMenuItem.h"
#include "basic/mvImage.h"
#include "basic/mvImageButton.h"

#include "colors/mvColorButton.h"
#include "colors/mvColorEdit.h"
#include "colors/mvColorPicker.h"
#include "colors/mvColorMapScale.h"
#include "colors/mvColorMap.h"
#include "colors/mvColorMapButton.h"
#include "colors/mvColorMapRegistry.h"
#include "colors/mvColorMapSlider.h"

#include "misc/mvProgressBar.h"
#include "misc/mvItemPool.h"
#include "misc/mvSpacer.h"
#include "misc/mvSeparator.h"

#include "containers/mvTemplateRegistry.h"
#include "containers/mvFilterSet.h"
#include "containers/mvClipper.h"
#include "containers/mvStage.h"
#include "containers/mvTreeNode.h"
#include "containers/mvChild.h"
#include "containers/mvGroup.h"
#include "containers/mvCollapsingHeader.h"
#include "containers/mvTab.h"
#include "containers/mvTabBar.h"
#include "containers/mvMenu.h"
#include "containers/mvMenuBar.h"
#include "containers/mvTooltip.h"
#include "containers/mvWindowAppItem.h"
#include "containers/mvDragPayload.h"
#include "containers/mvViewportMenuBar.h"

#include "tables/mvTable.h"
#include "tables/mvTableColumn.h"
#include "tables/mvTableRow.h"
#include "tables/mvTableCell.h"

#include "drawing/mvDrawlist.h"
#include "drawing/mvDrawLine.h"
#include "drawing/mvDrawArrow.h"
#include "drawing/mvDrawTriangle.h"
#include "drawing/mvDrawCircle.h"
#include "drawing/mvDrawEllipse.h"
#include "drawing/mvDrawBezierCubic.h"
#include "drawing/mvDrawBezierQuadratic.h"
#include "drawing/mvDrawQuad.h"
#include "drawing/mvDrawRect.h"
#include "drawing/mvDrawText.h"
#include "drawing/mvDrawPolygon.h"
#include "drawing/mvDrawPolyline.h"
#include "drawing/mvDrawImage.h"
#include "drawing/mvDrawLayer.h"
#include "drawing/mvViewportDrawlist.h"

#include "custom/mvTimePicker.h"
#include "custom/mvDatePicker.h"
#include "custom/mvSlider3D.h"
#include "custom/mvKnob.h"
#include "custom/mvLoadingIndicator.h"

#include "composite/mvFileDialog.h"
#include "composite/mvFileExtension.h"

#include "plots/mvPlot.h"
#include "plots/mvPlotLegend.h"
#include "plots/mvPlotAxis.h"
#include "plots/mvDragPoint.h"
#include "plots/mvDragLine.h"
#include "plots/mvAnnotation.h"

#include "plots/mvSubPlots.h"
#include "plots/mvSimplePlot.h"
#include "plots/mvLineSeries.h"
#include "plots/mvBarSeries.h"
#include "plots/mvScatterSeries.h"
#include "plots/mvAreaSeries.h"
#include "plots/mvStemSeries.h"
#include "plots/mvLabelSeries.h"
#include "plots/mvPieSeries.h"
#include "plots/mvShadeSeries.h"
#include "plots/mvErrorSeries.h"
#include "plots/mvHeatSeries.h"
#include "plots/mvImageSeries.h"
#include "plots/mvStairSeries.h"
#include "plots/mvCandleSeries.h"
#include "plots/mvInfiniteLineSeries.h"
#include "plots/mvHistogramSeries.h"
#include "plots/mv2dHistogramSeries.h"

#include "nodes/mvNodeEditor.h"
#include "nodes/mvNode.h"
#include "nodes/mvNodeAttribute.h"
#include "nodes/mvNodeLink.h"

#include "fonts/mvFont.h"
#include "fonts/mvFontRegistry.h"
#include "fonts/mvFontChars.h"
#include "fonts/mvFontRange.h"
#include "fonts/mvFontRangeHint.h"
#include "fonts/mvCharRemap.h"

#include "themes/mvTheme.h"
#include "themes/mvThemeComponent.h"
#include "themes/mvThemeColor.h"
#include "themes/mvThemeStyle.h"

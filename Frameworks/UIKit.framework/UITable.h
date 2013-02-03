/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFloatArray, UIView, _UITableReorderingSupport, UITableCountView, _UITableDeleteAnimationSupport, NSMutableArray;

@interface UITable : UIScroller {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct { 
        unsigned int separatorStyle : 3; 
        unsigned int rowDeletionEnabled : 1; 
        unsigned int allowSelectionDuringRowDeletion : 1; 
        unsigned int dataSourceHeightForRow : 1; 
        unsigned int dataSourceSetObjectValue : 1; 
        unsigned int dataShowDisclosureForRow : 1; 
        unsigned int dataDisclosureClickableForRow : 1; 
        unsigned int dataSourceWantsHints : 1; 
        unsigned int dataSourceCanDeleteRow : 1; 
        unsigned int dataSourceConfirmDeleteRow : 1; 
        unsigned int delegateTableSelectionDidChange : 1; 
        unsigned int scrollsToSelection : 1; 
        unsigned int reloadSkippedDuringSuspension : 1; 
        unsigned int reuseTableCells : 1; 
        unsigned int delegateUpdateVisibleCellsNote : 1; 
        unsigned int delegateTableRowSelected : 1; 
        unsigned int rowAlreadyHighlighted : 1; 
        unsigned int needsReload : 1; 
        unsigned int delegateCanSwipe : 1; 
        unsigned int updatingVisibleCellsManually : 1; 
        unsigned int scheduledUpdateVisibleCells : 1; 
        unsigned int warnForForcedCellUpdateDisabled : 1; 
        unsigned int delaySendingSelectionChanged : 1; 
        unsigned int dataSourceCanInsertAtRow : 1; 
        unsigned int shouldDisplayTopSeparator : 1; 
        unsigned int displayTopSeparator : 1; 
        unsigned int needToAdjustExtraSeparators : 1; 
        unsigned int ignoreDragSwipe : 1; 
        unsigned int lastHighlightedRowActive : 1; 
        unsigned int reloading : 1; 
        unsigned int countStringInsignificantRowCount : 4; 
        unsigned int dataSourceCanReuseCell : 1; 
        unsigned int reserved : 27; 
    UIView *_accessoryView;
    UITableCountView *_countLabel;
    id _dataSource;
    _UITableDeleteAnimationSupport *_deleteAnimationSupport;
    SEL _doubleAction;
    NSMutableArray *_extraSeparators;
    unsigned int _lastHighlightedRow;
    float _padding;
    _UITableReorderingSupport *_reorderingSupport;
    int _reusableCapacity;
    NSMutableArray *_reusableTableCells;
    int _rowCount;
    UIFloatArray *_rowHeights;
    unsigned int _selectedRow;
    int _swipeToDeleteRow;
    NSMutableArray *_tableColumns;
    } _tableFlags;
    int _tableReloadingSuspendedCount;
    NSMutableArray *_visibleCells;
    } _visibleCols;
    } _visibleRows;
}

+ (void)_initializeSafeCategory;
+ (id)standardTableWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (id)_accessibilityAccessoryView;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityInternalData;
- (id)_accessibilityScrollStatus;
- (id)_accessibilitySupplementaryHeaderViews;
- (void)_addSubview:(id)arg1 atTop:(BOOL)arg2;
- (void)_adjustCountLabel;
- (void)_adjustExtraSeparators;
- (void)_adjustReusableTableCells;
- (void)_animateNewCells:(id)arg1 bySlidingDownAmount:(float)arg2;
- (void)_animateNewCells:(id)arg1 bySlidingUpAmount:(float)arg2;
- (void)_animateRemovalOfCell:(id)arg1 atRow:(int)arg2 col:(int)arg3 viaEdge:(int)arg4 withAmountToSlideUp:(float*)arg5;
- (void)_animateRemovalOfVisibleRows:(id)arg1 viaEdge:(int)arg2 withAmountToSlideUp:(float*)arg3;
- (void)_animateRowsForDeletionOfRow:(int)arg1 withSep:(id)arg2;
- (void)_autoscroll:(id)arg1;
- (void)_beginReorderingForCell:(id)arg1;
- (BOOL)_checkCanSelectRow:(int)arg1 view:(id)arg2;
- (unsigned int)_countStringRowCount;
- (void)_delaySendSelectionDidChange;
- (void)_deleteRowAlertDidEndContinuation:(id)arg1;
- (void)_deleteRowAlertDidEndWithResult:(BOOL)arg1 contextInfo:(id)arg2;
- (void)_didDeleteRowForTableCell:(id)arg1;
- (void)_didInsertRowForTableCell:(id)arg1;
- (void)_disableInteraction;
- (void)_enableAndRestoreTableStateAfterAnimation;
- (void)_enableInteraction;
- (void)_enableRowDeletion:(BOOL)arg1 forCell:(id)arg2 atRow:(int)arg3 allowInsert:(BOOL)arg4 allowReorder:(BOOL)arg5 animated:(BOOL)arg6;
- (void)_endCellReorderAnimation;
- (void)_endReorderingForCell:(id)arg1;
- (void)_fadeCellOutAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedAnimatingCellReorder:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedRemovingRemovalButtonForTableCell:(id)arg1;
- (void)_getRowCount:(int*)arg1 andHeight:(float*)arg2 beforeVisibleCellsForRows:(id)arg3;
- (float)_partOfRow:(int)arg1 thatIsHidden:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectOfRow:(int)arg1 usingRowHeights:(id)arg2;
- (void)_reloadRowHeights;
- (void)_removeContextFromSuperview:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (int)_removeFromVisibleRows:(id)arg1;
- (void)_reorderPositionChangedForCell:(id)arg1;
- (void)_restoreTableStateAfterAnimation;
- (id)_resuableObjectForTableCell:(id)arg1;
- (void)_resumeReloads;
- (int)_rowForTableCell:(id)arg1;
- (void)_saveTableStateBeforeAnimationForRow:(int)arg1;
- (void)_scheduleAdjustExtraSeparators;
- (id)_scriptingInfo;
- (void)_selectRow:(int)arg1 byExtendingSelection:(BOOL)arg2 withFade:(BOOL)arg3 scrollingToVisible:(BOOL)arg4 withSelectionNotifications:(BOOL)arg5;
- (void)_sendSelectionDidChange;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1;
- (void)_setRowCount:(int)arg1;
- (BOOL)_shouldDeleteRowForTableCell:(id)arg1;
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;
- (void)_stopAutoscrollTimer;
- (void)_suspendReloads;
- (void)_tableCellAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_updateContentSize;
- (void)_updateOriginOfCells:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_updateVisibleCellsImmediatelyIfNecessary;
- (void)_updateVisibleCellsNow;
- (BOOL)_userCanDeleteRows;
- (void)_userSelectRow:(int)arg1;
- (void)_willDeleteRow:(int)arg1 forTableCell:(id)arg2 viaEdge:(int)arg3 animateOthers:(BOOL)arg4;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessoryView;
- (void)addTableColumn:(id)arg1;
- (struct { float x1; float x2; float x3; float x4; })adornmentMargins;
- (void)animateDeletionOfCellAtRow:(int)arg1 column:(int)arg2 viaEdge:(int)arg3;
- (void)animateDeletionOfRowWithCell:(id)arg1 viaEdge:(int)arg2 animatingOthersUp:(BOOL)arg3;
- (void)animateDeletionOfRowWithCell:(id)arg1 viaEdge:(int)arg2;
- (void)animateDeletionOfRowWithCell:(id)arg1;
- (float)animationDuration;
- (BOOL)canDeleteRow:(int)arg1;
- (BOOL)canHandleSwipes;
- (BOOL)canInsertAtRow:(int)arg1;
- (BOOL)canSelectRow:(int)arg1;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (id)cellAtRow:(int)arg1 column:(int)arg2;
- (void)clearAllData;
- (int)columnAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (int)columnWithIdentifier:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })columnsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)completeRowDeletionAnimation;
- (void)contentMouseUpInView:(id)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (id)createPreparedCellForRow:(int)arg1 column:(int)arg2;
- (id)dataSource;
- (id)dataSourceCreateCellForRow:(int)arg1 column:(int)arg2 reusing:(id)arg3;
- (int)dataSourceGetRowCount;
- (BOOL)dataSourceSupportsVariableRowHeights;
- (void)dealloc;
- (int)deleteConfirmationRow;
- (void)deleteRows:(id)arg1 viaEdge:(int)arg2 animated:(BOOL)arg3;
- (void)deleteRows:(id)arg1 viaEdge:(int)arg2;
- (SEL)doubleAction;
- (void)drawExtraSeparator:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)enableRowDeletion:(BOOL)arg1 animated:(BOOL)arg2;
- (void)enableRowDeletion:(BOOL)arg1;
- (void)floatArray:(id)arg1 getValueCount:(int*)arg2 gapIndexCount:(int*)arg3;
- (BOOL)floatArray:(id)arg1 loadValues:(float*)arg2 count:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfCellAtColumn:(int)arg1 row:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfCellAtRow:(int)arg1 column:(int)arg2;
- (BOOL)getRow:(int*)arg1 column:(int*)arg2 ofTableCell:(id)arg3;
- (BOOL)highlightNextRowByDelta:(int)arg1;
- (BOOL)highlightRow:(int)arg1;
- (void)highlightView:(id)arg1 state:(BOOL)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertRows:(id)arg1 deleteRows:(id)arg2 reloadRows:(id)arg3;
- (BOOL)isAccessibilityElement;
- (BOOL)isRowDeletionEnabled;
- (int)lastHighlightedRow;
- (void)layoutSubviews;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)noteNumberOfRowsChanged;
- (int)numberOfColumns;
- (int)numberOfRows;
- (struct { float x1; float x2; float x3; float x4; })pressedAdornmentMargins;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfColumn:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfRow:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfViewAtColumn:(int)arg1 row:(int)arg2;
- (void)reloadCellAtRow:(int)arg1 column:(int)arg2 animated:(BOOL)arg3;
- (void)reloadData;
- (void)reloadDataForInsertionOfRows:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 animated:(BOOL)arg2;
- (void)reloadDataForInsertionOfRows:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)removeControlWillHideRemoveConfirmation:(id)arg1;
- (void)removeFromSuperview;
- (void)removeTableColumn:(id)arg1;
- (int)rowAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)rowHeight;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)scrollAndCenterTableCell:(id)arg1 animated:(BOOL)arg2;
- (void)scrollRowToVisible:(int)arg1;
- (void)selectCell:(id)arg1 inRow:(int)arg2 column:(int)arg3 withFade:(BOOL)arg4;
- (BOOL)selectHighlightedRow;
- (void)selectRow:(int)arg1 byExtendingSelection:(BOOL)arg2 withFade:(BOOL)arg3 scrollingToVisible:(BOOL)arg4;
- (void)selectRow:(int)arg1 byExtendingSelection:(BOOL)arg2 withFade:(BOOL)arg3;
- (void)selectRow:(int)arg1 byExtendingSelection:(BOOL)arg2;
- (int)selectedRow;
- (int)separatorStyle;
- (void)setAccessoryView:(id)arg1;
- (void)setAllowSelectionDuringRowDeletion:(BOOL)arg1;
- (void)setAllowsReordering:(BOOL)arg1;
- (void)setCountString:(id)arg1;
- (void)setCountStringInsignificantRowCount:(unsigned int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteConfirmationRow:(int)arg1;
- (void)setDoubleAction:(SEL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayInRowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPadding:(float)arg1;
- (void)setResusesTableCells:(BOOL)arg1;
- (void)setReusesTableCells:(BOOL)arg1;
- (void)setRowHeight:(float)arg1;
- (void)setScrollsToSelection:(BOOL)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (BOOL)shouldDelaySendingSelectionChanged;
- (BOOL)shouldIndentRow:(int)arg1;
- (int)swipe:(int)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (id)tableColumnWithIdentifier:(id)arg1;
- (id)tableColumns;
- (void)updateDisclosures;
- (BOOL)validateDataSource;
- (id)viewAtColumn:(int)arg1 row:(int)arg2;
- (id)visibleCellForRow:(int)arg1 column:(int)arg2;
- (id)visibleCells;
- (id)visibleCellsWithoutUpdatingLayout;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visibleRows;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visibleRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
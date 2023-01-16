//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIKeyboardAsyncTextSelectionController
{
    _Bool _shouldDelayShowSelectionCommands;	// 8 = 0x8
}

- (void)endFloatingCursor;	// IMP=0x0000000000b06d4f
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000b06cf6
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000b06c9d
- (void)modifySelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000b06c8b
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;	// IMP=0x0000000000b06c79
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3;	// IMP=0x0000000000b06a20
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000b066b1
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(struct CGPoint)arg2 executionContext:(id)arg3;	// IMP=0x0000000000b06344
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b06081
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 executionContext:(id)arg3;	// IMP=0x0000000000b05e37
- (void)showSelectionView;	// IMP=0x0000000000b05d75
- (void)showSelectionCommands;	// IMP=0x0000000000b05c95
- (void)setRangedSelectionShouldShowGrabbers:(_Bool)arg1;	// IMP=0x0000000000b059c0
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;	// IMP=0x0000000000b05797
- (void)selectPositionAtPoint:(struct CGPoint)arg1 granularity:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b056ec
- (void)selectPositionAtPoint:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b056d5
- (void)selectPositionAtPoint:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000b0539b
- (_Bool)shouldAllowSelectionGestureWithTouchType:(long long)arg1 atPoint:(struct CGPoint)arg2 toProgressToState:(long long)arg3;	// IMP=0x0000000000b05327
- (struct CGRect)caretRectForRightmostSelectedPosition;	// IMP=0x0000000000b0512b
- (struct CGRect)caretRectForLeftmostSelectedPosition;	// IMP=0x0000000000b04f2f
- (_Bool)cursorPositionIsContainedByRange:(id)arg1;	// IMP=0x0000000000b04c63

@end

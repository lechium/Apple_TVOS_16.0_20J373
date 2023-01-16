//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, UIKBTree, UIKeyboardSliceSet, UIKeyboardTransitionSlice;

__attribute__((visibility("hidden")))
@interface UIKBSplitKeyplaneGenerator : NSObject
{
    NSMutableArray *_rows;	// 8 = 0x8
    NSDictionary *_splitLayoutHints;	// 16 = 0x10
    UIKBTree *_sourceKeyboard;	// 24 = 0x18
    UIKBTree *_sourceKeyplane;	// 32 = 0x20
    struct CGSize _splitKeySizeFactor;	// 40 = 0x28
    struct CGSize _keyboardSize;	// 56 = 0x38
    double _leftSideWidestRow;	// 72 = 0x48
    double _rightSideWidestRow;	// 80 = 0x50
    long long _keyboardType;	// 88 = 0x58
    UIKeyboardSliceSet *_sliceSet;	// 96 = 0x60
    UIKeyboardTransitionSlice *_leftSlice;	// 104 = 0x68
    UIKeyboardTransitionSlice *_rightSlice;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000b22f0d
- (id)generateRivenKeyplaneFromKeyplane:(id)arg1 forKeyboard:(id)arg2;	// IMP=0x0000000000b22799
- (id)finalizeSplitKeyplane;	// IMP=0x0000000000b21af3
- (void)initializeGeneratorForKeyplane:(id)arg1 name:(id)arg2;	// IMP=0x0000000000b218d8
- (void)organizeKeyplaneIntoRows;	// IMP=0x0000000000b2148f
- (id)hintsForRow:(id)arg1;	// IMP=0x0000000000b20dc4
- (void)splitRow:(id)arg1;	// IMP=0x0000000000b20045
- (void)alignSpaceKeyEdges;	// IMP=0x0000000000b1f448
- (void)addKey:(id)arg1 withShape:(id)arg2 forRow:(id)arg3 attribs:(id)arg4 left:(_Bool)arg5 force:(_Bool)arg6 isDefaultWidth:(_Bool)arg7;	// IMP=0x0000000000b1ee19
- (void)commitUncommittedSlices;	// IMP=0x0000000000b1ecff
- (void)splitSpaceKey:(id)arg1 leftSpace:(id)arg2 left:(struct CGRect)arg3 right:(struct CGRect)arg4;	// IMP=0x0000000000b1e84d
- (void)addSliceStart:(struct CGRect)arg1 end:(struct CGRect)arg2 startToken:(id)arg3 endToken:(id)arg4 left:(_Bool)arg5 normalization:(int)arg6 isDefaultWidth:(_Bool)arg7 row:(int)arg8;	// IMP=0x0000000000b1e427
- (id)keysOrderedByPosition;	// IMP=0x0000000000b1e3e1
- (id)init;	// IMP=0x0000000000b1e2e2

@end

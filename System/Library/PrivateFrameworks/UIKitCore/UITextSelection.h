//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMRange, UIResponder, UITextRange;
@protocol UITextInputPrivate;

__attribute__((visibility("hidden")))
@interface UITextSelection : NSObject
{
    UIResponder<UITextInputPrivate> *_document;	// 8 = 0x8
    long long _granularity;	// 16 = 0x10
    UITextRange *_selectedRange;	// 24 = 0x18
    UITextRange *_base;	// 32 = 0x20
    UITextRange *_initialExtent;	// 40 = 0x28
    _Bool _isCommitting;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000f41e3f
@property(readonly, nonatomic) __weak UIResponder<UITextInputPrivate> *document; // @synthesize document=_document;
@property(readonly, nonatomic) _Bool isCommitting; // @synthesize isCommitting=_isCommitting;
@property(retain, nonatomic) UITextRange *selectedRange; // @synthesize selectedRange=_selectedRange;
@property(retain, nonatomic) UITextRange *initialExtent; // @synthesize initialExtent=_initialExtent;
@property(nonatomic) long long granularity; // @synthesize granularity=_granularity;
@property(retain, nonatomic) UITextRange *base; // @synthesize base=_base;
- (void)smartExtendRangedSelection:(int)arg1 downstream:(_Bool)arg2;	// IMP=0x0000000000f41799
- (void)setGranularRangedSelectionWithExtentPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f414f4
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f412cc
- (void)setSelectionWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;	// IMP=0x0000000000f411c7
- (_Bool)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(_Bool)arg2;	// IMP=0x0000000000f411b3
- (_Bool)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(_Bool)arg2 allowFlipping:(_Bool)arg3;	// IMP=0x0000000000f40c78
- (id)_boundedOrInvertedSelectionRangeForExtent:(id)arg1 forPoint:(struct CGPoint)arg2 fromPosition:(id)arg3 inDirection:(long long)arg4;	// IMP=0x0000000000f409ec
- (_Bool)_allowsSelectionInversion;	// IMP=0x0000000000f409e4
- (struct CGPoint)clipPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0000000000f408b7
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;	// IMP=0x0000000000f407e0
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;	// IMP=0x0000000000f40709
- (void)clearRangedSelectionInitialExtent;	// IMP=0x0000000000f406f5
- (void)setRangedSelectionBaseToCurrentSelectionEnd;	// IMP=0x0000000000f4061e
- (void)setRangedSelectionBaseToCurrentSelectionStart;	// IMP=0x0000000000f40547
- (void)setRangedSelectionBaseToCurrentSelection;	// IMP=0x0000000000f404fb
- (_Bool)isRangedSelectionSpanningDocument;	// IMP=0x0000000000f403a8
- (_Bool)hasEditableSelection;	// IMP=0x0000000000f402b9
- (_Bool)pointAtEndOfLine:(struct CGPoint)arg1;	// IMP=0x0000000000f40202
- (_Bool)pointAtStartOfLine:(struct CGPoint)arg1;	// IMP=0x0000000000f40148
- (void)moveCaretToBoundaryOfWhitespaceOrLine;	// IMP=0x0000000000f4005f
- (void)increaseSelectionGranularity;	// IMP=0x0000000000f40014
- (void)alterSelectionGranularity:(long long)arg1;	// IMP=0x0000000000f3fd73
- (void)alterSelection:(struct CGPoint)arg1 granularity:(long long)arg2;	// IMP=0x0000000000f3fd36
- (void)aggressivelyExpandSelectionToSmartSelectionContainingCaretSelection;	// IMP=0x0000000000f3fc8a
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;	// IMP=0x0000000000f3f528
- (void)collapseSelection;	// IMP=0x0000000000f3f45d
- (void)clearSelection;	// IMP=0x0000000000f3f449
- (void)selectAll;	// IMP=0x0000000000f3f391
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f3eed8
- (void)extendSelectionToPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f3ec7a
- (void)setSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f3ebc7
- (unsigned long long)offsetInMarkedText;	// IMP=0x0000000000f3eae3
- (struct CGRect)closestCaretRectForPoint:(struct CGPoint)arg1 inSelection:(_Bool)arg2;	// IMP=0x0000000000f3e9c6
- (id)selectedText;	// IMP=0x0000000000f3e946
- (id)wordContainingCaretSelection;	// IMP=0x0000000000f3e871
- (struct CGRect)caretRectAtBeginOfDocument;	// IMP=0x0000000000f3e7e2
- (struct CGRect)caretRectAtEndOfDocument;	// IMP=0x0000000000f3e753
- (struct CGRect)caretRect;	// IMP=0x0000000000f3e65e
- (id)selectionRects;	// IMP=0x0000000000f3e5de
@property(readonly, nonatomic, getter=_domRange) DOMRange *domRange;
@property(readonly, nonatomic) _Bool willSelectionChange;
- (void)commit;	// IMP=0x0000000000f3e2be
- (void)selectionChanged;	// IMP=0x0000000000f3e24f
- (void)dealloc;	// IMP=0x0000000000f3e211
- (void)invalidate;	// IMP=0x0000000000f3e1c4
- (id)initWithDocument:(id)arg1;	// IMP=0x0000000000f3e14c

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface _PBPresentationElementView : UIView
{
    _Bool _containedInVisibleWindow;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=isContainedInVisibleWindow) _Bool containedInVisibleWindow; // @synthesize containedInVisibleWindow=_containedInVisibleWindow;
- (void)_updateStateForWindow:(id)arg1;	// IMP=0x0010000000099a8e
- (void)_updateObserversForWindow:(id)arg1;	// IMP=0x0010000000099923
- (void)_windowDidBecomeHidden:(id)arg1;	// IMP=0x00100000000998d3
- (void)_windowDidBecomeVisible:(id)arg1;	// IMP=0x0010000000099883
- (void)willMoveToWindow:(id)arg1;	// IMP=0x001000000009984c
- (void)didMoveToWindow;	// IMP=0x00100000000997ef
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000009979f

@end


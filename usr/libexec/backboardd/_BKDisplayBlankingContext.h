//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAContext, CAWindowServerDisplay;

@interface _BKDisplayBlankingContext : NSObject
{
    CAWindowServerDisplay *_display;	// 8 = 0x8
    CAContext *_blankingContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000010875
- (void)_wrapInCATransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010810
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000107cc
- (void)_updateBounds;	// IMP=0x0010000000010749
- (void)clear;	// IMP=0x0010000000010660
- (void)blank;	// IMP=0x0010000000010445
- (void)dealloc;	// IMP=0x0010000000010407
- (id)initForDisplay:(id)arg1;	// IMP=0x001000000001039c

@end


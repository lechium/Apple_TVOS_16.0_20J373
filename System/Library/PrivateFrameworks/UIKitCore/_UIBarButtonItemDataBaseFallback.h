//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemDataBaseFallback : NSObject
{
}

+ (id)fallback;	// IMP=0x0010000000d31d3d
- (struct UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000d31ed8
- (id)backgroundImageForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000d31ed0
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000d31ec4
- (id)colorForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000d31ebc
- (id)backIndicatorTextStyleForSymbolConfiguration;	// IMP=0x0000000000d31ea8
- (id)textStyleForSymbolConfiguration;	// IMP=0x0000000000d31e94
- (id)fontForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000d31d7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


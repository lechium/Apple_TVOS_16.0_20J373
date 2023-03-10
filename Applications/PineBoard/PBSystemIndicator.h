//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBSystemIndicatorBackground, PBSystemIndicatorIcon;

@interface PBSystemIndicator : NSObject
{
    PBSystemIndicatorBackground *_background;	// 8 = 0x8
    PBSystemIndicatorIcon *_icon;	// 16 = 0x10
}

+ (id)indicatorWithBackground:(id)arg1 icon:(id)arg2;	// IMP=0x0020000000087fdd
+ (id)indicatorWithBackground:(id)arg1;	// IMP=0x0010000000087fb1
- (void).cxx_destruct;	// IMP=0x00200000000882d5
@property(readonly, nonatomic) PBSystemIndicatorIcon *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) PBSystemIndicatorBackground *background; // @synthesize background=_background;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000088215
- (id)description;	// IMP=0x00100000000881cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000088078

@end


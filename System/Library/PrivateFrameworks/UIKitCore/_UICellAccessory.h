//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UICellAccessory : NSObject
{
    UIView *_view;	// 8 = 0x8
    _Bool _alwaysNeedsLayout;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    double _reservedLayoutWidth;	// 32 = 0x20
}

+ (id)accessoryWithIdentifier:(id)arg1;	// IMP=0x0060000000e18d3d
- (void).cxx_destruct;	// IMP=0x0000000000e18f84
@property(readonly, nonatomic) _Bool alwaysNeedsLayout; // @synthesize alwaysNeedsLayout=_alwaysNeedsLayout;
@property(nonatomic) double reservedLayoutWidth; // @synthesize reservedLayoutWidth=_reservedLayoutWidth;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000e18f2c
- (id)description;	// IMP=0x0000000000e18e61
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e18d8f
- (id)init;	// IMP=0x0000000000e18d01

@end


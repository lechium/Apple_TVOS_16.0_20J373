//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _GCHapticDynamicParameter : NSObject
{
    unsigned int _type;	// 8 = 0x8
    double _value;	// 16 = 0x10
}

@property(nonatomic) double value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (id)initWithType:(unsigned int)arg1 value:(double)arg2;	// IMP=0x0000000000049fff

@end


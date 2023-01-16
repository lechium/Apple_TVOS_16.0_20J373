//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBModelField, NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultColumnTuple : HMFObject
{
    int _offset;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    HMBModelField *_modelField;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005383a
@property(readonly, nonatomic) HMBModelField *modelField; // @synthesize modelField=_modelField;
@property(readonly, nonatomic) int offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000053759
- (id)initWithName:(id)arg1 offset:(int)arg2 modelField:(id)arg3;	// IMP=0x00000000000536a6

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _XCSynthesizedTouchEventState : NSObject
{
    NSMutableDictionary *_touchDowns;	// 8 = 0x8
    NSMutableDictionary *_touchUpdates;	// 16 = 0x10
    NSMutableDictionary *_touchUps;	// 24 = 0x18
    double _pressure;	// 32 = 0x20
    double _currentOffset;	// 40 = 0x28
    double _previousOffset;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000024aea
@property double previousOffset; // @synthesize previousOffset=_previousOffset;
@property double currentOffset; // @synthesize currentOffset=_currentOffset;
@property(nonatomic) double pressure; // @synthesize pressure=_pressure;
@property(readonly) NSMutableDictionary *touchUps; // @synthesize touchUps=_touchUps;
@property(readonly) NSMutableDictionary *touchUpdates; // @synthesize touchUpdates=_touchUpdates;
@property(readonly) NSMutableDictionary *touchDowns; // @synthesize touchDowns=_touchDowns;
- (id)description;	// IMP=0x0010000000024886
- (CDUnknownBlockType)eventAction;	// IMP=0x0010000000024063
- (id)init;	// IMP=0x0010000000023fcd

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CLOdometerAlarmManagerProtocol;

@interface CLOdometerAlarm : NSObject
{
    _Bool invalid;	// 8 = 0x8
    double odometerTarget;	// 16 = 0x10
    CDUnknownBlockType handler;	// 24 = 0x18
    id <CLOdometerAlarmManagerProtocol> _manager;	// 32 = 0x20
}

@property(retain, nonatomic) id <CLOdometerAlarmManagerProtocol> manager; // @synthesize manager=_manager;
@property(nonatomic) _Bool invalid; // @synthesize invalid;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
@property(nonatomic) double odometerTarget; // @synthesize odometerTarget;
- (void)fire:(double)arg1 withError:(id)arg2;	// IMP=0x00100000007a8690
- (void)invalidate;	// IMP=0x00100000007a8627
- (void)dealloc;	// IMP=0x00100000007a85d0
- (id)initWithDistance:(double)arg1 inUniverse:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000007a84cd
- (id)init;	// IMP=0x00100000007a849e

@end


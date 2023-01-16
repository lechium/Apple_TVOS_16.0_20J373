//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CHNotifyObserver : NSObject
{
    int _token;	// 8 = 0x8
    CDUnknownBlockType _callback;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000030e8a
@property(nonatomic) int token; // @synthesize token=_token;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)dealloc;	// IMP=0x0000000000030e1a
- (id)initWithName:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030c24

@end


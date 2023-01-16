//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source, SCNJittererDelegate;

__attribute__((visibility("hidden")))
@interface SCNJitterer : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    unsigned long long _iteration;	// 24 = 0x18
    _Bool _restartSourceIsSuspended;	// 32 = 0x20
    id <SCNJittererDelegate> _delegate;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_restartSource;	// 48 = 0x30
}

+ (void)initialize;	// IMP=0x00600000000569a6
- (void)restart;	// IMP=0x0000000000056f48
- (void)stopIfNeeded;	// IMP=0x0000000000056eba
- (void)jitter;	// IMP=0x0000000000056d28
- (void)update;	// IMP=0x0000000000056cc6
- (_Bool)isAborting;	// IMP=0x0000000000056cb8
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)delegateWillDie;	// IMP=0x0000000000056c26
- (void)dealloc;	// IMP=0x0000000000056b17
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000569c1

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (SCRCThread)
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;	// IMP=0x00600000000286a3
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;	// IMP=0x00600000000285e4
- (void)performAsyncBlock:(CDUnknownBlockType)arg1 forThreadKey:(id)arg2;	// IMP=0x0010000000029a59
- (id)valueForBlock:(CDUnknownBlockType)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;	// IMP=0x00100000000298e6
- (id)valueForSelector:(SEL)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copyValue:(_Bool)arg4 withObjects:(id)arg5;	// IMP=0x001000000002962b
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;	// IMP=0x0010000000029613
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2;	// IMP=0x00100000000295f9
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;	// IMP=0x00100000000295dc
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2;	// IMP=0x00100000000295c2
- (id)_getRetainedValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copy:(_Bool)arg4;	// IMP=0x001000000002945a
- (id)copyValueForKeyPathOnMainThread:(id)arg1;	// IMP=0x0010000000029443
- (id)valueForKeyPathOnMainThread:(id)arg1;	// IMP=0x0010000000029427
- (id)_getRetainedValueForKeyPathOnMainThread:(id)arg1 copy:(_Bool)arg2;	// IMP=0x0010000000029324
- (void)_scr_safePerformBlock:(id)arg1 lock:(id)arg2;	// IMP=0x0010000000029282
- (void)_scr_safeGetValueForKeyPath:(id)arg1;	// IMP=0x001000000002926e
- (void)_scr_safeGetValueForKeyPath:(id)arg1 lock:(id)arg2;	// IMP=0x0010000000029117
- (void)_scr_safeGetValueForBlock:(id)arg1 lock:(id)arg2;	// IMP=0x001000000002902c
- (void)_scr_safeGetValueForSelector:(id)arg1 lock:(id)arg2;	// IMP=0x0010000000028e94
- (id)performSelector:(SEL)arg1 withObjectsAsArray:(id)arg2;	// IMP=0x00100000000288ba
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;	// IMP=0x001000000002880e
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;	// IMP=0x001000000002874f
- (id)threadDescription;	// IMP=0x00100000000285d2
@end


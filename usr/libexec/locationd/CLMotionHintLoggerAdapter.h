//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMotionHintLoggerAdapter
{
}

+ (id)getSilo;	// IMP=0x0010000000bdc228
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bdc20f
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000bdc1b2
+ (_Bool)isSupported;	// IMP=0x0010000000bdc626
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000bdc5fe
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bdc5d1
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000bdc5a9
- (void *)adaptee;	// IMP=0x0010000000bdc576
- (void)endService;	// IMP=0x0010000000bdc55b
- (void)beginService;	// IMP=0x0010000000bdc2c1
- (id)init;	// IMP=0x0010000000bdc284

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end


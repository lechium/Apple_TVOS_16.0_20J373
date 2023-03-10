//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMContext, NSString;
@protocol MCMReply, MCMResultPromise;

__attribute__((visibility("hidden")))
@interface MCMCommand : NSObject
{
    MCMContext *_context;	// 8 = 0x8
    id <MCMResultPromise> _resultPromise;	// 16 = 0x10
    id <MCMReply> _reply;	// 24 = 0x18
}

+ (void)relayToPrivilegedDaemonMessage:(id)arg1 reply:(id)arg2 context:(id)arg3;	// IMP=0x0010000000069e2a
+ (void)relayToPrivilegedDaemonMessage:(id)arg1 reply:(id)arg2 context:(id)arg3 resultPromise:(id)arg4;	// IMP=0x0010000000069b0b
+ (Class)incomingMessageClass;	// IMP=0x0010000000069a87
+ (unsigned long long)command;	// IMP=0x0010000000069a03
- (void).cxx_destruct;	// IMP=0x00000000000699ad
@property(readonly, nonatomic) id <MCMReply> reply; // @synthesize reply=_reply;
@property(readonly, nonatomic) id <MCMResultPromise> resultPromise; // @synthesize resultPromise=_resultPromise;
@property(readonly, nonatomic) MCMContext *context; // @synthesize context=_context;
- (void)execute;	// IMP=0x000000000006988a
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000069857
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x000000000006978d
- (id)initWithContext:(id)arg1 resultPromise:(id)arg2;	// IMP=0x00000000000696d4
- (id)userIdentityForContainerIdentifier:(id)arg1 containerClass:(unsigned long long)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000069ef0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


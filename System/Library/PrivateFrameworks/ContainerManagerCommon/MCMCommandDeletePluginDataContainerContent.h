//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandDeletePluginDataContainerContent
{
    MCMContainerIdentity *_containerIdentity;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x0010000000031ea2
+ (unsigned long long)command;	// IMP=0x0010000000031e6c
- (void).cxx_destruct;	// IMP=0x0000000000031e2e
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
- (void)execute;	// IMP=0x0000000000031c2f
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000031b50
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x0000000000031a94

@end

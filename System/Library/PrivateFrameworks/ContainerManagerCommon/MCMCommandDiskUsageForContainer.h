//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandDiskUsageForContainer
{
    MCMConcreteContainerIdentity *_concreteContainerIdentity;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x0010000000066c38
+ (unsigned long long)command;	// IMP=0x0010000000066c02
- (void).cxx_destruct;	// IMP=0x0000000000066667
@property(readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity; // @synthesize concreteContainerIdentity=_concreteContainerIdentity;
- (void)execute;	// IMP=0x0000000000065fdc
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000065f1e
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x0000000000065e62

@end

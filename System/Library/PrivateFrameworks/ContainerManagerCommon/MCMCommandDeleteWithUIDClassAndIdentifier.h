//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMCommandOperationDelete, MCMContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandDeleteWithUIDClassAndIdentifier
{
    MCMContainerIdentity *_containerIdentity;	// 8 = 0x8
    MCMCommandOperationDelete *_deleteCommand;	// 16 = 0x10
}

+ (Class)incomingMessageClass;	// IMP=0x00100000000690d2
+ (unsigned long long)command;	// IMP=0x001000000006909c
- (void).cxx_destruct;	// IMP=0x0000000000069048
@property(readonly, nonatomic) MCMCommandOperationDelete *deleteCommand; // @synthesize deleteCommand=_deleteCommand;
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
- (void)execute;	// IMP=0x0000000000068e7f
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000068e10
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x0000000000068c7f

@end


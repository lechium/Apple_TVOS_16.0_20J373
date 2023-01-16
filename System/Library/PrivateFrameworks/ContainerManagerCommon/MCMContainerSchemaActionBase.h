//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMContainerSchemaContext, NSString;

__attribute__((visibility("hidden")))
@interface MCMContainerSchemaActionBase : NSObject
{
    MCMContainerSchemaContext *_context;	// 8 = 0x8
}

+ (void)_resolveArguments:(id)arg1 toPathArgument:(id *)arg2 context:(id)arg3;	// IMP=0x001000000006ccb8
+ (void)_resolveArguments:(id)arg1 toSourcePathArgument:(id *)arg2 destPathArgument:(id *)arg3 context:(id)arg4;	// IMP=0x001000000006c936
+ (id)actionIdentifier;	// IMP=0x001000000006c8fe
+ (id)actionWithName:(id)arg1 arguments:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006c60b
- (void).cxx_destruct;	// IMP=0x000000000006c5d0
@property(readonly, nonatomic) MCMContainerSchemaContext *context; // @synthesize context=_context;
- (_Bool)performWithError:(id *)arg1;	// IMP=0x000000000006c517
- (_Bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 error:(id *)arg2 duringBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000006c2ab
- (_Bool)makedirAtURL:(id)arg1 followTerminalSymlink:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000006bad8
- (_Bool)backupFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006b39c
@property(readonly, copy) NSString *description;
- (id)initWithContext:(id)arg1;	// IMP=0x000000000006b2c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

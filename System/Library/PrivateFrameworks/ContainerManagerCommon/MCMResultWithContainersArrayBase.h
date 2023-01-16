//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMClientIdentity, MCMError, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MCMResultWithContainersArrayBase
{
    _Bool _includePath;	// 8 = 0x8
    _Bool _includeInfo;	// 9 = 0x9
    _Bool _skipSandboxExtensions;	// 10 = 0xa
    NSArray *_containerPaths;	// 16 = 0x10
    NSArray *_containerIdentities;	// 24 = 0x18
    NSArray *_containers;	// 32 = 0x20
    NSArray *_resolvedLinks;	// 40 = 0x28
    MCMClientIdentity *_clientIdentity;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009439f
@property(readonly, nonatomic) _Bool skipSandboxExtensions; // @synthesize skipSandboxExtensions=_skipSandboxExtensions;
@property(readonly, nonatomic) MCMClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(readonly, nonatomic) _Bool includeInfo; // @synthesize includeInfo=_includeInfo;
@property(readonly, nonatomic) _Bool includePath; // @synthesize includePath=_includePath;
@property(readonly, nonatomic) NSArray *resolvedLinks; // @synthesize resolvedLinks=_resolvedLinks;
@property(readonly, nonatomic) NSArray *containers; // @synthesize containers=_containers;
@property(readonly, nonatomic) NSArray *containerIdentities; // @synthesize containerIdentities=_containerIdentities;
@property(readonly, nonatomic) NSArray *containerPaths; // @synthesize containerPaths=_containerPaths;
- (id)initWithContainers:(id)arg1 resolvedLinks:(id)arg2 includePath:(_Bool)arg3 includeInfo:(_Bool)arg4 clientIdentity:(id)arg5 skipSandboxExtensions:(_Bool)arg6;	// IMP=0x0000000000094071
- (id)initWithContainerPaths:(id)arg1 containerIdentities:(id)arg2 includePath:(_Bool)arg3 clientIdentity:(id)arg4 skipSandboxExtensions:(_Bool)arg5;	// IMP=0x0000000000093f28
- (_Bool)encodeResultOntoReply:(id)arg1;	// IMP=0x0000000000093b67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) MCMError *error; // @dynamic error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


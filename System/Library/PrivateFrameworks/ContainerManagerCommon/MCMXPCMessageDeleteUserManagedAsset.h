//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity, NSString;

__attribute__((visibility("hidden")))
@interface MCMXPCMessageDeleteUserManagedAsset
{
    NSString *_sourceRelativePath;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000093b29
@property(readonly, nonatomic) NSString *sourceRelativePath; // @synthesize sourceRelativePath=_sourceRelativePath;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000939db

// Remaining properties
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileReadingClaim
{
    NSURL *_url;	// 208 = 0xd0
    _Bool _urlDidChange;	// 216 = 0xd8
    unsigned long long _options;	// 224 = 0xe0
    NSFileAccessNode *_location;	// 232 = 0xe8
    NSFileAccessNode *_rootNode;	// 240 = 0xf0
    long long _linkResolutionCount;	// 248 = 0xf8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000612d51
- (void)protectFilesAgainstEviction;	// IMP=0x00000000006140f7
- (_Bool)shouldCancelInsteadOfWaiting;	// IMP=0x00000000006140e1
- (id)allURLs;	// IMP=0x00000000006140b6
- (_Bool)shouldBeRevokedPriorToInvokingAccessor;	// IMP=0x00000000006140a1
- (_Bool)blocksClaim:(id)arg1;	// IMP=0x0000000000614073
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;	// IMP=0x0000000000614015
- (void)devalueSelf;	// IMP=0x0000000000613f37
- (void)invokeClaimer;	// IMP=0x0000000000613c03
- (void)resolveURLThenMaybeContinueInvokingClaimer:(CDUnknownBlockType)arg1;	// IMP=0x000000000061388f
- (void)granted;	// IMP=0x00000000006133ac
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000613357
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000061334f
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;	// IMP=0x00000000006131b0
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000612d59
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000612c0a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000612af1
- (void)dealloc;	// IMP=0x0000000000612a8c
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(CDUnknownBlockType)arg4;	// IMP=0x00000000006129fd

@end

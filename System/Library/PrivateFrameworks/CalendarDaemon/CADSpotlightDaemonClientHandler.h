//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CADSpotlightDaemonClientHandler : NSObject
{
}

- (void)provideFileURLForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000041a6b
- (void)provideDataForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000041205
- (id)textRepresentationForEvent:(void *)arg1;	// IMP=0x0000000000040ef8
- (void)reindexItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 acknowledgementHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000040b6e
- (void)reindexAllItemsForBundleID:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000040a65
- (void)start;	// IMP=0x0000000000040a5f

@end

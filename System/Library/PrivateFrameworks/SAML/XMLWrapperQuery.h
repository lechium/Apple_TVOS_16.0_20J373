//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface XMLWrapperQuery : NSObject
{
}

+ (void)initialize;	// IMP=0x008000000000b097
- (id)executeXpathQuery:(struct _xmlDoc *)arg1 query:(id)arg2 ctxNode:(struct _xmlNode *)arg3 error:(id *)arg4;	// IMP=0x000000000000b4fc
- (_Bool)registerXpathNamespacesForCtx:(struct _xmlXPathContext *)arg1 error:(id *)arg2;	// IMP=0x000000000000b250
- (void)registerNamespace:(id)arg1;	// IMP=0x000000000000b1ac
- (id)searchNodeWithXpathQuery:(struct _xmlNode *)arg1 query:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b177
- (id)elementForNode:(struct _xmlNode *)arg1;	// IMP=0x000000000000b0e0

@end


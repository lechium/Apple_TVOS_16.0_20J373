//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtension.h>

@class NSArray, NSString, NSUUID;

@interface NSExtension (ExtensionKitAdditions)
+ (id)extensionInfoForCurrentProcess;	// IMP=0x0020000000041c87
+ (id)extensionWithIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000041842
+ (id)extensionRepresentedBy:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000041351
@property(readonly) NSUUID *uuid; // @dynamic uuid;
@property(readonly, copy) NSArray *_personas; // @dynamic _personas;
- (void)beginExtensionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000041cb2
- (id)beginExtensionRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000041ca0
@property(readonly, nonatomic) NSString *containingBundleIdentifier;
@property(readonly) _Bool requiresMacCatalystBehavior;
@property(retain, nonatomic) NSArray *preferredLanguages;
- (id)extensionIdentityWithError:(id *)arg1;	// IMP=0x001000000004185b
@end


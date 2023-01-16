//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserActivity.h>

@class BSProcessHandle, NSString;

@interface NSUserActivity (UISceneActivationConditions)
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0020000000baa9c5
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0020000000baa7c2
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x0020000000baa75b
@property(copy, nonatomic) NSString *targetContentIdentifier;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000baaa2c
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000baa90d
- (void)_setOriginatingProcess:(id)arg1;	// IMP=0x00100000010a6665
- (void)_setSourceApplication:(id)arg1;	// IMP=0x00100000010a664f
@property(readonly, nonatomic) BSProcessHandle *_originatingProcess;
@property(readonly, nonatomic) NSString *_sourceApplication;
@end

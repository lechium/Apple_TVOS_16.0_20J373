//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAUIDisambiguationList.h>

@class AFDisambiguationInfo, NSData;

@interface SAUIDisambiguationList (AFDisambiguationAssistancePrivate)
- (void)af_saveItemSelection:(id)arg1 forType:(long long)arg2;	// IMP=0x00200000000b82be
- (id)af_assistedSelectionItem;	// IMP=0x00200000000b7c5f
@property(retain, nonatomic, setter=af_setDisambiguationInfo:) AFDisambiguationInfo *af_disambiguationInfo;
- (id)af_itemForIndexIdentifier:(id)arg1;	// IMP=0x00200000000b79b9
- (id)af_indexIdentifierForItem:(id)arg1;	// IMP=0x00200000000b7902
@property(readonly, nonatomic) NSData *af_disambiguationIdentifier;
@end

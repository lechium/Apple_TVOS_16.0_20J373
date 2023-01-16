//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MPCModelGenericAVItemAssetLoadResult : NSObject
{
    _Bool _allowsAssetCaching;	// 8 = 0x8
    _Bool _allowsAssetInfoCaching;	// 9 = 0x9
    _Bool _isHomeSharingAsset;	// 10 = 0xa
    _Bool _isHLSAsset;	// 11 = 0xb
    _Bool _isCloudStreamingAsset;	// 12 = 0xc
    _Bool _onlineSubscriptionKeysRequired;	// 13 = 0xd
    _Bool _iTunesStoreStream;	// 14 = 0xe
    _Bool _downloadedAsset;	// 15 = 0xf
    NSString *_assetPathExtension;	// 16 = 0x10
    long long _assetProtectionType;	// 24 = 0x18
    long long _assetQualityType;	// 32 = 0x20
    NSURL *_assetURL;	// 40 = 0x28
    NSURL *_protectedContentSupportStorageFileURL;	// 48 = 0x30
    NSDictionary *_purchaseBundleDictionary;	// 56 = 0x38
    NSURL *_streamingKeyCertificateURL;	// 64 = 0x40
    NSURL *_streamingKeyServerURL;	// 72 = 0x48
    NSString *_keyServerProtocolType;	// 80 = 0x50
    NSNumber *_streamingKeyAdamID;	// 88 = 0x58
    NSURL *_alternateHLSPlaylistURL;	// 96 = 0x60
    NSURL *_alternateHLSKeyServerURL;	// 104 = 0x68
    NSURL *_alternateHLSKeyCertificateURL;	// 112 = 0x70
    id _suzeLeaseID;	// 120 = 0x78
    CDUnknownBlockType _willBecomeActivePlayerItemHandler;	// 128 = 0x80
    NSString *_playbackAuthorizationToken;	// 136 = 0x88
    long long _audioAssetType;	// 144 = 0x90
    long long _source;	// 152 = 0x98
}

+ (id)assetLoadResultWithStoreAssetPlaybackResponse:(id)arg1 assetLoadProperties:(id)arg2 source:(long long)arg3 error:(id *)arg4;	// IMP=0x0060000000070fb7
- (void).cxx_destruct;	// IMP=0x0000000000072cff
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic, getter=isDownloadedAsset) _Bool downloadedAsset; // @synthesize downloadedAsset=_downloadedAsset;
@property(nonatomic) long long audioAssetType; // @synthesize audioAssetType=_audioAssetType;
@property(copy, nonatomic) NSString *playbackAuthorizationToken; // @synthesize playbackAuthorizationToken=_playbackAuthorizationToken;
@property(copy, nonatomic) CDUnknownBlockType willBecomeActivePlayerItemHandler; // @synthesize willBecomeActivePlayerItemHandler=_willBecomeActivePlayerItemHandler;
@property(nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream; // @synthesize iTunesStoreStream=_iTunesStoreStream;
@property(retain, nonatomic) id suzeLeaseID; // @synthesize suzeLeaseID=_suzeLeaseID;
@property(copy, nonatomic) NSURL *alternateHLSKeyCertificateURL; // @synthesize alternateHLSKeyCertificateURL=_alternateHLSKeyCertificateURL;
@property(copy, nonatomic) NSURL *alternateHLSKeyServerURL; // @synthesize alternateHLSKeyServerURL=_alternateHLSKeyServerURL;
@property(copy, nonatomic) NSURL *alternateHLSPlaylistURL; // @synthesize alternateHLSPlaylistURL=_alternateHLSPlaylistURL;
@property(copy, nonatomic) NSNumber *streamingKeyAdamID; // @synthesize streamingKeyAdamID=_streamingKeyAdamID;
@property(copy, nonatomic) NSString *keyServerProtocolType; // @synthesize keyServerProtocolType=_keyServerProtocolType;
@property(copy, nonatomic) NSURL *streamingKeyServerURL; // @synthesize streamingKeyServerURL=_streamingKeyServerURL;
@property(copy, nonatomic) NSURL *streamingKeyCertificateURL; // @synthesize streamingKeyCertificateURL=_streamingKeyCertificateURL;
@property(copy, nonatomic) NSDictionary *purchaseBundleDictionary; // @synthesize purchaseBundleDictionary=_purchaseBundleDictionary;
@property(copy, nonatomic) NSURL *protectedContentSupportStorageFileURL; // @synthesize protectedContentSupportStorageFileURL=_protectedContentSupportStorageFileURL;
@property(nonatomic) _Bool onlineSubscriptionKeysRequired; // @synthesize onlineSubscriptionKeysRequired=_onlineSubscriptionKeysRequired;
@property(nonatomic) _Bool isCloudStreamingAsset; // @synthesize isCloudStreamingAsset=_isCloudStreamingAsset;
@property(nonatomic) _Bool isHLSAsset; // @synthesize isHLSAsset=_isHLSAsset;
@property(nonatomic) _Bool isHomeSharingAsset; // @synthesize isHomeSharingAsset=_isHomeSharingAsset;
@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) long long assetQualityType; // @synthesize assetQualityType=_assetQualityType;
@property(nonatomic) long long assetProtectionType; // @synthesize assetProtectionType=_assetProtectionType;
@property(copy, nonatomic) NSString *assetPathExtension; // @synthesize assetPathExtension=_assetPathExtension;
@property(nonatomic) _Bool allowsAssetInfoCaching; // @synthesize allowsAssetInfoCaching=_allowsAssetInfoCaching;
@property(nonatomic) _Bool allowsAssetCaching; // @synthesize allowsAssetCaching=_allowsAssetCaching;
- (id)descriptionDictionary;	// IMP=0x0000000000072220
- (id)description;	// IMP=0x0000000000072198
@property(readonly, nonatomic) _Bool hasValidAsset;

@end


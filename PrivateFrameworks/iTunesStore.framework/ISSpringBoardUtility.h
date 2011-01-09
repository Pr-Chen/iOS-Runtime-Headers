/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableDictionary;



@interface ISSpringBoardUtility : NSObject 
{
    NSMutableDictionary *_badgeValues;
    unsigned int _postingBadgeValuesChanged : 1;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)badgeStringForIdentifier:(id)arg1;
- (void)cancelDownloadingIconForIdentifier:(id)arg1;
- (void)setBadgeString:(id)arg1 forIdentifier:(id)arg2;
- (void)_badgeValuesChangedExternally;
- (void)_loadBadgeValues;
- (void)_reallySetBadgeString:(id)arg1 forIdentifier:(id)arg2;
- (void)_updateBadgeValues;

@end
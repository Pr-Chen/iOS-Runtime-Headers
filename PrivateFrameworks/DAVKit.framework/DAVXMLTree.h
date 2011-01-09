/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSMutableArray, NSMutableData, DAVXMLNode;



@interface DAVXMLTree : NSObject 
{
    DAVXMLNode *root;
    NSMutableArray *stack;
    NSMutableData *contentData;
}

+ (id)treeWithXMLData:(id)arg1;

- (id)initWithXMLData:(id)arg1;
- (void)dealloc;
- (id)root;
- (void)_startelement:(const char *)arg1 attributes:(const char **)arg2;
- (void)_endelement:(const char *)arg1;
- (void)_data:(const char *)arg1 len:(NSInteger)arg2;

@end
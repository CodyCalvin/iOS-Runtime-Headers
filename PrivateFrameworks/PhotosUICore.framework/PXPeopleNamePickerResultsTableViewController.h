/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleNamePickerResultsTableViewController : UITableViewController {
    NSMutableArray * _items;
}

@property (nonatomic, readonly) bool hasResuls;
@property (retain) NSMutableArray *items;

- (void).cxx_destruct;
- (id)contactAtIndexPath:(id)arg1;
- (bool)hasResuls;
- (id)initWithStyle:(long long)arg1;
- (id)items;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)personAtIndexPath:(id)arg1;
- (void)setItems:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateItemsForSearchString:(id)arg1;
- (void)viewDidLoad;

@end
